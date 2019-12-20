void psum3(float a[], float p[], long n)
{
  long i;
  float f1, f2, f3, f4, last;
  last = a[0];
  p[0] = last;
  for (i = 1; i < n - 3; i+=4)
    {
      
      f1 = a[i] + last;
      f2 = a[i+1] + f1;
      f3 = a[i+2] + f2;
      f4 = a[i+3] + f3;

      p[i] = f1;
      p[i+1] = f2;
      p[i+2] = f3;
      p[i+3] = f4;
      
      last = f4;    // last value we added to array 
    }
  for (;i < n; i++)  // for not multiples of 4
    {
      last += a[i];   // continue summing last
      p[i] = last;
    }

}
