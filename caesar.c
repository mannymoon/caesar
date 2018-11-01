#include<stdio.h>

int main(){
	char input[200];
	char letter;
	int key;
	printf("Enter your sentence:");
	scanf("%s",input);
	printf("Enter the key:");
	scanf("%d", &key);
	key=key%26;//if key>26 we well still have right answer
	for(int i = 0; input[i] != '\0'; ++i){
		letter=input[i];
		
		if((letter >= 'a' && letter <= 'z'-key)||(letter >= 'A' && letter <= 'Z'-key)){
            letter = letter + key;
		}
		else{
			if((letter>='a'&& letter <='z')||(letter>='A'&& letter <='Z'))
				letter=(letter+key)-26;
			else
				break;
		}
		input[i]=letter;
	}
	printf("Encrypted message: %s", input);
	return 0;
}
