// brute force
for (int i = 0 ; i < n ; i++) {
	int cnt = 0 ;
	for (i = 0; j < n ; j++) {
		if (a[j] <= b[i]) {
			cnt++;
		}
	}
	cout << cnt;
}


// two pointers
int j = 0;
for (int i = 0 ; i < n ; i++) {
	int cnt = 0 ;
	for ( ; j < n ; j++) {
		if (a[j] <= b[i]) {
			cnt++;
		}
	}
	cout << cnt;
}


problem -> Count the number of element in array "A" which are smaller than or eual to Array "B"
(both array are sorted)