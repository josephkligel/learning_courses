
int sr(int x){
	int square_root;

	if(x < 0)
		return -1.0;
	else{
		for(int i = 0; i <= x; ++i)
			if( i * i == x)
				return i;
	}
}
