t=int(input())
for _ in range(t):
    s=str(input())
    cur_len=1
    max_len=1
    prev_index=0
    vis=[-1]*300
    vis[ord(s[0])]=0
    for i in range(1,len(s)):
        prev_index=vis[ord(s[i])]
        if(prev_index==-1 or (i-cur_len>prev_index)):
            cur_len+=1
        else:
            if(cur_len>max_len):
                max_len=cur_len
            cur_len=i-prev_index
        vis[ord(s[i])]=i
    if(cur_len>max_len):
        max_len=cur_len
    print(max_len)