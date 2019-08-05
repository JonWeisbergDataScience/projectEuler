def three_five(n):
    sums = 0
    for i in range(n):
        if( i%3 == 0): sums += i
        elif(i%5 == 0): sums += i

    print("The sum of multiples of 3 or 5 less than %s is %s" %(n,sums))

if __name__ == "__main__":

    print("What number?")
    n = input()
    three_five(n)
