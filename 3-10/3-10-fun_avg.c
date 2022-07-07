float fun_avg(int var[],int num)
{
 	float avrg=0.0;
 	int i;
 	for(i=0;i<num;i++)
 		avrg+=var[i];
 	avrg/=num;
 	
 	return (avrg);
}
