
#define VALUE_RANGE 100 // MAXIMUM VALUE IN SPARSE MATRIX
#define SPARSITY 8 // OUT OF 10


matrix sparse_Matrix_Generator(int r, int c){
	
	matrix m;
	vect v;
	int temp;
	for (int i=0; i < r; i++){
		for(int j=0; j < c; j++){
			temp = rand() % 10;
			temp = (temp/SPARSITY)* rand() % VALUE_RANGE;
			
			v.push_back(temp);     
		}
		m.push_back(v);
		v.clear();
	}
	return m;
}
