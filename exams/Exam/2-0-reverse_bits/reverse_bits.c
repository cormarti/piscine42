unsigned char reverse_bits(unsigned char octet){

    int i = 7;
    int j = 0;
    unsigned char rev = 0;

    while(i >= 0)
	{
    	rev += ((octet >> j) & 1) << i;
    	i--;
    	j++;
    }
    return(rev);
}