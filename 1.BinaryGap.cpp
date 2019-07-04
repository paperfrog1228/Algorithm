int count=0;
int tempCount=0;
bool countBool=false;
int solution(int n) {

    if(n%2==1)
    {   
    
        if(tempCount<count&&countBool)
        tempCount=count;
        
        count =0;
        countBool=true;
    }
    if(n%2==0)
        count++;
    if(n/2==0)
        {
            if(countBool)
            return tempCount;
            else return 0;
        }
    else
        solution(n/2);

    
}
