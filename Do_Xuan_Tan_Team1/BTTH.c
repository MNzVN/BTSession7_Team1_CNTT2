#include <stdio.h>
int main(){
	int choice;
	int n, i;
	int S;
	int gt = 1; 
	
	do {
	
	printf("\n+===========|Program Interface|==========+\n");
	printf("\n| 1.Calculate the sum from 1 to n             |\n");
	printf("\n| 2.Calculate the sum of even numbers 1 to    |\n");
    printf("\n| 3.Calculate factorial of n                  |\n");
	printf("\n| 4.Check prime number                        |\n");
	printf("\n| 5.Check palindrome number                   |\n");
	printf("\n| 6.Exit                                      |\n");
	printf("\n+=============================================+\n");
	printf("\n------------Please enter your choice-----------\n");
    scanf("%d", &choice);
 switch ( choice ){
 	case 1:{
 		   printf("enter n ( n > 0):\n");
 		   scanf("%d", &n);
 		if ( n > 0){
 			S = 0;
 		   	 for ( i = 1; i <= n; i	++){
				 S += i; // cong don vao 5
		}
			printf("Total S = 1 + 2 + 3 + ... + %d = %d\n", n, S);
	    }else{
		    printf("n must be greater than 0!\n");
	  } 
	break;
   }
	case 2:{
		    printf("enter n: \n");
		    scanf("%d", &n);
	    if ( n > 0){
	    	S = 0;
	    	for ( i = 1; i <= n; i++){
		    if ( i % 2 == 0){
			S += i;  // cong don
        }  
    }
	    	printf("Sum of even numbers from 1 to %d is: %d ", n, S);
		}else{
		    printf("n must be greater than 0!\n");
		}
	break;
	}
	case 3:{
   		        printf("enter n (n >= 0)");
   		        scanf("%d", &n);
   		        i = 1;
   		    if ( n >= 0 ) {
   		    	while (i <= n){
   		    		gt = gt * i; //nhan don
					i++;
   		        }
   		        printf("%d! = %d\n", n, gt);
			}else{
			   	printf("n must be greater than 0!\n");
			   }
	break;
	}
	case 4:{
		        int dem = 0;
		         printf("Enter n (n > 1):  ");
		         scanf("%d", &n);
		    if(n > 1){
		    	for (i = 2; i < n; i++){
		        if ( n % i == 0){
		        	dem++;
				}
		   	}
		    if ( dem == 0){
		    	printf(" %d is a prime number \n", n);
	        
			}else{
				printf("%d not is a prime number to \n", n);
			}
		    }else{
			    printf("n must be greater than 1!\n");
		}		
	break;
	}
	case 5:{
		        int original, reversed = 0, remainder;               // so ban dau nguoi dung nhap, so dao nguoc duoc tao ra bang vong lap while, dung de lay chu so cuoi cua n
		        printf("enter n (n >= 0)");
   		        scanf("%d", &n);
   		    if ( n >= 0){
   		    	original = n; // Luu lai gia tri ban dau la n
   		    	while (n != 0){
   		    		remainder = n % 10;                             // lay chu so cuoi 
   		    		reversed = reversed * 10 + remainder;
   		    		n = n / 10;                        // bo chu so cuoi
   		    	}
   		    		
			if ( reversed == original ){
				printf("%d  is a palindrome number\n", original);
			}else{
				printf("%d  is not a palindrome number\n", original);
		}
			   }else{
			   	printf("n must be greater than 0!\n");
		}
		
	break;
	}
	case 6:{
		printf("exit");
		break;
	}	 
 }
}
while (choice != 6);

 return 0;
}

