void main(){
	
	int r=0,c=0,i=0,j=0;
	
	printf("enter row :");
	scanf("%d",&r);
	
	printf("enter column :");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],s[r][c];
	
	printf("enter element for matrix a\n");
	for(i=0;i<r;i++){
		printf("enter row %d\n",i);
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
			//a[i][j]=i+j;
		}
	}
	
	
	printf("enter element for matrix b\n");
	for(i=0;i<r;i++){
		printf("enter row %d\n",i);
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
			//b[i][j]=i+j;
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			s[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("sum matrix is\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
	
}
