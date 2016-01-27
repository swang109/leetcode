// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int beg = 1,end = n;
        while(beg<end){
            int mid = beg+(end-beg)/2; //to avoid overflow
            if(isBadVersion(mid)) end=mid;
            else beg=mid+1;
            
        }
        return beg;
    }
};

int main(){

}
