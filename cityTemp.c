void main(){
	
	float cT[2][7];
	int i=0,j=0;
	for(;i<2;i++){
		printf("\n\nenter value for city %d\n",i+1);
		for(j=0;j<7;j++){
			printf("Temp. of Day %d: ",j+1);
			scanf("%f",&cT[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		printf("\n\nTemp of city %d\n",i+1);
		for(j=0;j<7;j++){
			printf("Temp. of Day %d is %f \n",j+1,cT[i][j]);
		}
	}
	
}
