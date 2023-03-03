if(n%2)
        {
            int x = n / 2;
            int a,b;
            int sum_x,sum_y;
            for(int i=x-100000; i<=x+100000; i++)
            {
                a=i;
                b=n-i;
                if(i>=0 && a+b==n)
                {
                    sum_x = sumOfDigits(a);
                    sum_y = sumOfDigits(b);

                    if (abs(sum_x - sum_y) <= 1)
                    {


                        cout << i << " " << n-i << std::endl;
                        break;
                    }
                }
            }
        }
        else cout<<n/2<<" "<<n/2<<endl;