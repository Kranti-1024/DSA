def pivot(arr,n):
    pivot_index = -1
    leftsum=0
    rightsum=0
    for i in range(n):
        rightsum+=arr[i]
    for i in range(n):
        rightsum-=arr[i]
        if(leftsum==rightsum):
            pivot_index = i
        leftsum+=arr[i]

    print(pivot_index)

arr=[1,2,3,4,5,2,3,5]
pivot(arr,8)