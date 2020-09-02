//Sourabh Chandra Raha
//Stack Implementation using array
#include<stdio.h>
#include<stdlib.h>
struct ArrayStack{
	int top;
	int capacity;
	int *array;
};
struct ArrayStack* createstack(int capacity){
	struct ArrayStack *p;
	p = (struct ArrayStack*)malloc(sizeof(struct ArrayStack));
	p->top = -1;
	p->capacity = capacity;
	p->array =(int*) malloc(sizeof(int)*p->capacity);
	return(p);
};
int isFull(struct ArrayStack *p){
	if(p->top==p->capacity-1)
		return(1);
	else
		return(0);
}
int isEmpty(struct ArrayStack *p){
	if(p->top==-1)
		return(1);
	else
		return(0);
}
void push(struct ArrayStack *p,int item){
	if(!isFull(p)){
	
		p->top++;
		p->array[p->top] = item;
	}
}
int pop(struct ArrayStack *p){
	if(!isEmpty(p)){
		 int item;
	     item =	p->array[p->top];
		 p->top--; 
		 return(item);
	}
	return(1);
}
void View_Stack(struct ArrayStack *p){
	int i;
	if(!isEmpty(p)){
		for(i=p->top;i>-1;i--){
		printf("%3d",p->array[i]);
		
	}
  }
  else{
  		printf("\nNo items in the Stack");
}

}
main(){
	int item,choice;
	struct ArrayStack *p;
	p = createstack(5);
while(1){
	printf("\n1.Push");
	printf("\n2.Pop");
	printf("\n3.View Stack");
	printf("\n4.Exit");
	
	printf("\n\nEnter Your Choice");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			 printf("Enter a number");
			 scanf("%d",&item);
			 push(p,item);
			 break;
	    case 2:
	    	 item = pop(p);
	    	 if(item==1)
	    	 	printf("List is empty");
	    	else
	    		printf("\nPoped item is %d",item);
	    	break;
	    case 3:
	    	View_Stack(p);
	    	 break;	
	    case 4:
	    	exit(0);
	}

}
}
