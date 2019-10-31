/*
 * PrimeNumbers.cpp
 * 
 * Copyright 2019 test <test@test-VirtualBox>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <math.h>

int findPrime(int f){
	
	int cnt;
	int prime = 1;
	
	for( cnt = 2 ; cnt <= sqrt(f) ; cnt++){
		if ( f % cnt == 0 ){
			prime = 0;
			break;
		}
	}
	return prime;
}
		
		

int main(int argc, char **argv)
{
	int i;
	int maxNum = 1000000;
	int nums[maxNum + 1];
	int count = 0;
	
	for ( i = 0; i <= maxNum ; i++){
		nums[i] = 0;
	}
	
	nums[2] = 1;
	nums[3] = 1;
	
	for ( i = 4 ; i <= maxNum + 1 ; i++){
		nums[i] = findPrime(i);
		if ( nums[i] == 1 ) {
			if ( nums[ i - 2 ] == 1 ){
				count++;
			}
		}
	}
	
	printf("Number of consecutive odd prime pairs between 0 and %d : %d \n", maxNum, count);
	
	return 0;
}

