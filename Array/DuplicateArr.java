import java.util.HashSet;

public class DuplicateArr {
    public static boolean containsDuplicate(int [] nums){
    //     boolean flag = false;
    //     for(int i=0; i<nums.length; i++){
    //         for(int j=i+1; j<nums.length; j++){
    //             if(nums[i] == nums[j]){
    //                  flag = true;
    //                  break;
    //             }
    //         }

    //     }
    //    if(flag){
    //     return true;
    //    }
    //    else{
    //     return false;
    //    }


    HashSet<Integer> set = new HashSet<>();

    for(int num:nums){
        if(set.contains(num)){
            return true;
        }
        set.add(num);
    }

    return false;
    }

    public static void main(String[] args) {
        int nums[] = {1,2,3,3};
        System.out.println(containsDuplicate(nums));
    }
}
