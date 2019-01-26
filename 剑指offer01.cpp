class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
        int k = 0;
        if(length==0) return false;
        int a[length];
        for(int i=0;i<length;i++){
            a[i]=-1;
        }
        for(int i=0;i<length;i++){
            if(a[numbers[i]]==-1){
                a[numbers[i]]=numbers[i];
            }else {duplication[k]= a[numbers[i]];
                  return true;
                  }
        }
        return false;
    }
};