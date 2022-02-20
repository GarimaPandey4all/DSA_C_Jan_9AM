#include <stdio.h>
#include <stdlib.h>

//*
//**
//***
//****
//*****

//H.W:
//
//*****
//****
//***
//**
//*

void pattern(int n, int row, int col)
{
    if(row > n)
    {
        return;
    }

    if(col > row)
    {
        printf("\n");
        pattern(n, row+1, 1);
        return;
    }

    printf("*");
    pattern(n, row, col+1);
}

int main()
{
    pattern(5, 1, 1);

    return 0;
}
