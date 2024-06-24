void nForest(int n) {
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}

void mForest(int n) {
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}

void nTriangle(int n) {
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=i; j++) {
			cout << j << " ";
		}
		cout << endl;
	}
}

void triangle(int n) {
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=i; j++) {
			cout << i << " ";
		}
		cout << endl;
	}
}

void seeding(int n) {
	for (int i=0; i<n; i++) {
		for (int j=n; j>i; j--) {
			cout << "* ";
		}
		cout << endl;
	}
}

void nNumberTriangle(int n) {
    for (int i=0; i<n; i++) {
		for (int j=n; j>i; j--) {
			cout << n-j+1 << " ";
		}
		cout << endl;
	}
}

void nStarTriangle(int n) {
    for (int i=0; i<n; i++) {
        for (int j =0; j<n-i-1; j++)
        {
            cout <<" ";
        }

        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        
        for (int j=0; j < n-i-1; j++) {
            cout << " ";
        }

        cout << endl;
    }
}

void nStarTriangle(int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<i; j++)
        {
            cout <<" ";
        }

        for(int j=0; j<2*n-(2*i+1); j++){
            
            cout<<"*";
        }

         for (int j=0; j<i; j++)
        {
            cout <<" ";
        }

        cout << endl;
    }
}