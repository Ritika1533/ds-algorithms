12 11 13 5 6 7 8


11 12 13 5 6 7  - vvector 
merge two sorted array 


lvector = 11 12 13 rvector = 5 6 7 
i=0,j=0 k=left;
 while(i<l.size() && j<r.size()){
    if(l[i]<=r[j]){
        v[left]=l[i];
        i++;
    }else{
        v[left]=r[i];
        j++;
    }
    left++;
 }
 while(i<l.size()){
    v[left]=l[i];
    i++,left++;
 }
 while(j<r.size()){
    v[left]=r[i];
    j++,left++;
 }