#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{
    int t = 0;
    while (t == 0)
    {
        long num = get_long("Number: ") ;

        if (num > 0)
        {
            int length = 0;
            if (num / pow(10, 15) > 1)
            {
                length = 16;
            } 
            else if (num / (long)pow(10, 14) > 1)
            {
                length = 15;
            } 
            else if (num / (long)pow(10, 12) > 1)
            {
                length = 13;
            }
            int rightTwo = (num % (long)pow(10, 2)) / 10;
            int rightOne = (num % (long)pow(10, 2)) % 10;
            int rightFour = (num % (long)pow(10, 4)) / (long)pow(10, 3);
            int rightThree = ((num % (long)pow(10, 4)) % (long)pow(10, 3)) / 100;
            int rightSix = (num % (long)pow(10, 6)) / (long)pow(10, 5);
            int rightFive = ((num % (long)pow(10, 6)) % (long)pow(10, 5)) / (long)pow(10, 4);
            int rightEight = (num % (long)pow(10, 8)) / (long)pow(10, 7);
            int rightSeven = ((num % (long)pow(10, 8)) % (long)pow(10, 7)) / (long)pow(10, 6);
            int rightTen = (num % (long)pow(10, 10)) / (long)pow(10, 9);
            int rightNine = ((num % (long)pow(10, 10)) % (long)pow(10, 9)) / (long)pow(10, 8);
            int rightTwel = (num % (long)pow(10, 12)) / (long)pow(10, 11);
            int rightElev = ((num % (long)pow(10, 12)) % (long)pow(10, 11)) / (long)pow(10, 10);
            int rightFourt = (num % (long)pow(10, 14)) / (long)pow(10, 13);
            int rightThirt = ((num % (long)pow(10, 14)) % (long)pow(10, 13)) / (long)pow(10, 12);
            int rightSixt = (num % (long)pow(10, 16)) / (long)pow(10, 15);
            int rightFift = ((num % (long)pow(10, 16)) % (long)pow(10, 15)) / (long)pow(10, 14);

            //printf("digits from right to left: %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", rightOne, rightTwo, rightThree, rightFour, rightFive, rightSix, rightSeven, rightEight, rightNine, rightTen, rightElev, rightTwel, rightThirt, rightFourt, rightFift, rightSixt);



            int twTwo = rightTwo * 2;
            int twFour = rightFour * 2;
            int twSix = rightSix * 2;
            int twEight = rightEight * 2;
            int twTen = rightTen * 2;
            int twTwel = rightTwel * 2;
            int twFourt = rightFourt * 2;
            int twSixt = rightSixt * 2;

            int twTwor = twTwo % 10;
            int twTwol = twTwo / 10;
            int twFourr = twFour % 10;
            int twFourl = twFour / 10;
            int twSixr = twSix % 10;
            int twSixl = twSix / 10;
            int twEightr = twEight % 10;
            int twEightl = twEight / 10;
            int twTenr = twTen % 10;
            int twTenl = twTen / 10;
            int twTwelr = twTwel % 10;
            int twTwell = twTwel / 10;
            int twFourtr = twFourt % 10;
            int twFourtl = twFourt / 10;
            int twSixtr = twSixt % 10;
            int twSixtl = twSixt / 10;

            int sumDig = twTwor + twTwol + twFourr + twFourl + twSixr + twSixl + twEightr + twEightl + twTenr + twTenl + twTwelr + twTwell +
                         twFourtr + twFourtl + twSixtr + twSixtl;
            //printf("After first step, sum of the digit's digits:%d\n", sumDig);

            int total = sumDig + rightOne + rightThree + rightFive + rightSeven + rightNine + rightElev + rightThirt + rightFift;
            //printf("After second step, the total is:%d\n", total);

            int stAmer = num / (long)pow(10, 13);
            int stMaster = num / (long)pow(10, 14);
            int stVisa1 = num / (long)pow(10, 12);
            int stVisa2 = num / (long)pow(10, 15);

            if (total % 10 == 0)
            {
                if (length == 15)
                {
                    if (stAmer == 34 || stAmer == 37)
                    {
                        //printf("the first two digits are: %d\n", stAmer);
                        printf("AMEX\n");
                    } 
                    else
                    {
                        printf("INVALID\n");
                    }
                } 
                else if (length == 16)
                {
                    if (stMaster == 51 || stMaster == 52 || stMaster == 53 || stMaster == 54 || stMaster == 55)
                    {
                        //printf("the first two digits are: %d\n", stMaster);
                        printf("MASTERCARD\n");
                    } 
                    else if (stVisa2 == 4)
                    {
                        printf("VISA\n");
                    } 
                    else
                    {
                        printf("INVALID\n");
                    }
                } 
                else if (length == 13 && stVisa1 == 4)
                {
                    printf("VISA\n");
                } 
                else
                {
                    printf("INVALID\n");
                }
            } 
            else
            {
                printf("INVALID\n");
            }
            t = 1;
        }
    }

}