return -1;
    else if(tree[i] == target)
    return i;
    else if(target < tree[i])
    return search(2*i + 1,target);
    else
    return search(2*i + 2,target);
