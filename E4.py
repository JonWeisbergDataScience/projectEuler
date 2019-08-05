from __future__ import division

def is_pal(n):
    remainder = 0
    reverse_num = 0
    temp = n
    pal = 0
    while(temp != 0):
        remainder = temp%10
        reverse_num = reverse_num*10 + remainder
        temp = temp // 10
    if( reverse_num == n): pal = 1
    return pal




if __name__ == "__main__":

    big_pal = 100001
    for i in range(999,99,-1):
        for j in range(999,99,-1):
            bignum = i*j
            if(is_pal(bignum) == 1 and bignum > big_pal): 
                    big_pal = bignum

    print("The biggest palindrome from multiplying 2 3-digit nums is %s" %big_pal)
