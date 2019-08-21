#include "Chapter_2_3.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#include "wincrypt.h"



Chapter_2_3::Chapter_2_3()
{
}

Chapter_2_3::~Chapter_2_3()
{
}



/* Example 2-3 : Triangle */
int Chapter_2_3::Triangle()
{
	for (int i = 0; i < 15; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

/* Apply - Reverse triangle */
int Chapter_2_3::ReverseTriangle()
{
	for (int i = 15; i >= 1; --i)
	{
		for (int j = 1; j <= i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

/* Apply - Equilateral triangle */
int Chapter_2_3::EquilateralTriangle()
{
	int nMaxWidth = 31;
	int nMaxHeight = 16;

	for (int i = 0; i < nMaxHeight; ++i)
	{
		for (int j = 0; j < nMaxWidth; ++j)
		{
			if (j >= nMaxHeight - i && j <= nMaxHeight + i)
			{
				printf("*");
			}
			else
			{
				printf("-");
			}
		}
		printf("\n");
	}
	return 0;
}

/* Example 2-3 : Number matching game */
int Chapter_2_3::GetRandomize()
{
	HCRYPTPROV	hCryptProvider;
	BYTE		pbData;

	if (CryptAcquireContext(&hCryptProvider, NULL, NULL, PROV_RSA_FULL, CRYPT_VERIFYCONTEXT))
	{
		printf("Succeeded");
	}
	else
	{
		goto ERR;
	}

	/* CryptGenRandom function is deprecated. (https://docs.microsoft.com/en-us/windows/win32/api/wincrypt/nf-wincrypt-cryptgenrandom) */
	/* Instead https://docs.microsoft.com/ko-kr/windows/win32/seccng/cng-portal */
	if (CryptGenRandom(hCryptProvider, 1, &pbData))
	{
		int nRandomNumber = ((int)pbData * 100) / 255;
		printf("Random number : %d\n", nRandomNumber);
		return nRandomNumber;
	}
	else
	{
		goto ERR;
	}

ERR:
	if (hCryptProvider)
	{
		if (!CryptReleaseContext(hCryptProvider, 0))
		{
			printf("Failed Release Context\n");
		}
	}

	return 0;

	return false;
}

int Chapter_2_3::NumberMatchingGame()
{
	
	int nInput;
	
	int nTime = time(NULL);
	printf("time : %d\n", nTime);
	
	for (;;)
	{
		printf("Guess the number I made.(Enter 999 to exit.)\n");
		int nRandomNum = GetRandomize();
		while (1)
		{
			printf("Input number : ");
			scanf_s("%d", &nInput);

			if (nInput == 999)
			{
				exit(EXIT_SUCCESS);
			}
			if (nInput == nRandomNum)
			{
				printf("Correct. \n");
				exit(EXIT_SUCCESS);
			}
			else if (nInput > nRandomNum)
			{
				printf("Smaller than the input number.\n");
			}
			else
			{
				printf("Greater than the input number.\n");
			}

			//srand(time(NULL));
			//nRandomNum = rand();		
		}
	}
	return 0;
}

//time : 1565768052, Value : 8
