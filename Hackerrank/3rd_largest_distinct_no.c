int compare(const void *a, const void *b)
{
    return (*(int*)a>*(int*)b) - (*(int*)a<*(int*)b);
}
int thirdMax(int* nums, int numsSize) 
{
    qsort(nums, numsSize, sizeof(int),compare);
    int n=numsSize;
    int count=0;
    int thirdmax=0;
    for(int i=n-1;i>0;i--)
    {
        if(nums[i]!=nums[i-1])   
            count++;
        if(count==2)
        {
            thirdmax=nums[i-1];
            break;
        }
    }
    if(count<2)
        thirdmax=nums[n-1];
    return thirdmax;    
}