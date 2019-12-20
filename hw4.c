void transpose_6(int *dst, int *src, int dim)
{
  int i, j, limit;
  lim = dim - 16;
  // get values 16 at a time
  for (i = 0; i < lim; i+=16) {
    int i1 = i*dim;
    int i2 = i1+dim;
    int i3 = i2+dim;
    int i4 = i3+dim;
    int i5 = i4+dim;
    int i6 = i5+dim;
    int i7 = i6+dim;
    int i8 = i7+dim;
    int i9 = i8+dim;
    int i10 = i9+dim;
    int i11 = i10+dim;
    int i12 = i11+dim;
    int i13 = i12+dim;
    int i14 = i13+dim;
    int i15 = i14+dim;
    int i16 = i15+dim;
    // transpose each value
    for (j = 0; j < dim; j++) {
      int addr_j = j*dim;
      dst[addr_j + i] = src[i1 + j];
      dst[addr_j + i+1] = src[i2 + j];
      dst[addr_j + i+2] = src[i3 + j];
      dst[addr_j + i+3] = src[i4 + j];
      dst[addr_j + i+4] = src[i5 + j];
      dst[addr_j + i+5] = src[i6 + j];
      dst[addr_j + i+6] = src[i7 + j];
      dst[addr_j + i+7] = src[i8 + j];
      dst[addr_j + i+8] = src[i9 + j];
      dst[addr_j + i+9] = src[i10 + j];
      dst[addr_j + i+10] = src[i11 + j];
      dst[addr_j + i+11] = src[i12 + j];
      dst[addr_j + i+12] = src[i13 + j];
      dst[addr_j + i+13] = src[i14 + j];
      dst[addr_j + i+14] = src[i15 + j];
      dst[addr_j + i+15] = src[i16 + j];
    }
  }
  // transpose any we missed
  for (; i < dim; i++)
  {
    int idim = i*dim;
    for (j = 0; j < dim; j++)
      dst[j*dim + i] = src[idim + j];
   }
}