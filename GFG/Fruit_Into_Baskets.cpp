 int totalFruits(vector<int> &arr) {
        int l=0,r=0;
        int maxlen=0;
        map<int,int> mpp;
        
        while(r<arr.size()){
            mpp[arr[r]]++;
            
            if(mpp.size()>2){
                mpp[arr[l]]--;
                if(mpp[arr[l]]==0) mpp.erase(arr[l]);
                l++;
            }
            
            if(mpp.size()<=2){
                maxlen=max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
    }