class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());//as we sorted the starting index will not have parents 
        vector<string>res;
        res.push_back(folder[0]);//not subfloder so add it
        for(int i=1;i<folder.size();i++){
            string temp=res.back();//compare with last added result
            temp+='/';//as we need to compare the part in the subfolder need to add /
            if(folder[i].compare(0,temp.size(),temp)!=0){//compare them
                res.push_back(folder[i]);//if not them add to answer
            }
        }
        return res;
        
    }
};