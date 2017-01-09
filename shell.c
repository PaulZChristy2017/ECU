void shell(int array[], int size){
    int j,k,i,tmp;
    
/* sets interval gap */    
            for (i=size/2; i>0; i=i/2){
/* modifies interval gap */
                for (j=i;j<size;j++){
/* selects second number for sort comparison */
                    for (k=j-i; k>=0; k=k-i){
/* compares the two selected numbers */
                        if (array[k+i]>=array[k])
                                break;
                       
/* switches numbers if needed */
                            else{
                                tmp=array[k];
                                array[k]=array[k+i];
                                array[k+i]=tmp;
                        
                             }

                    }

                }
            }
}
   
