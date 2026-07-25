int somaDigitos(int b) {
  	if (b == 0) {
      	return 0;
  	}
	return (b % 10) + somaDigitos(b / 10);
}

int main()
{
  	int resultado = somaDigitos(472);
	return 0;
}
