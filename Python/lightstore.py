def check(A,B):
    count=0
    if(len(A)==len(B)):
        for i in range(0,len(A)):
            if(A[i]!=B[i]):
                count=count+1;
    else:
        if(len(A)>len(B)):
            for i in range(0,len(B)):
                if(A[i]!=B[i]):
                    count=count+1;
            no=len(A)-len(B);
            count=count+no;
            for i in range(0,len(A)):
                for j in range(0,len(B)):
                    if(A[i]==B[j]):
                        count=count-1;
        else:

            for i in range(0,len(A)):
                if(A[i]!=B[i]):
                    count=count+1;
            no=len(B)-len(A);
            count=count+no;
    return count;



A=input();
B=input();
num=check(A,B);
print(num);
