#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char s[1001];
	scanf("%s",s);
	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = 'a';
	}
	printf("%s\n", s);

	//mencari panjang string s pakai strlen
	cout << strlen(s)<<endl;

	//simpan panjang string s ke variabel lain
	int len = strlen(s);
	for(int i=0; i<len; i++){
		cout<<s[i];
	}
	cout<<endl;

	/* LEKSIKOGRAFIS
		aaa
		aab
		aac
		aad
		bcd
		edf
	*/
	cout<<"String \"aab\" lebih awal dari string \"aad\". "<<strcmp("aab","aad")<<endl;
	cout<<"String \"aab\" sama dari string \"aab\". "<<strcmp("aab","aab")<<endl;
	cout<<"String \"aad\" lebih akhir dari string \"aab\". "<<strcmp("aad","aab")<<endl;

	//memset : ngereset arraynya sampe nilai x= {char, false, 0, -1} semua

	char a[1000];
	bool b[1000];
	int c[1000],d[1000];
	//isi array a jadi 'c'
	memset(a,'c',sizeof(a));
	memset(b,false,sizeof(b));
	memset(c,0,sizeof(c));
	memset(d,-1,sizeof(d));
	//memset(nama_array,mau_diisi_apa,ukurannya)
	//memset bs ditaruh dimana aja, asal nggak diluar int main atau fungsi/subprogram
}
