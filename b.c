int main()
{	char str[1000] ;
  
	int i,j,diff,n,t,count ;
  
	scanf("%d",&t) ;
  
	while(t--)

 	 { scanf("%s",&str) ;
  
  	n=strlen(str) ;
   
 	count=0 ;
    
	for(i=0;i<n;i++)

         {	for(j=i;j<n;j++)

      		 { if(str[i]==str[j]||abs(str[i]-str[j])==32)
           
			count++ ;
          
			else break ;
 
		  } 
	if(str[i]>=97)
         
 	printf("%d%c",count,str[i]) ;
         
 	else printf("%d%c",count,str[i]+32) ;
          
	count=0 ; 
          
	i=j-1 ; }
         
 	printf("\n") ;
 
	} 
	return 0 ; 
}