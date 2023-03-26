 while (cin >> num != EOF) {
        vNum.push_back(num);
    }

    int sum = 0;
    for (int i = 0; i < vNum.size(); i++) {
        sum += vNum[i];
    }

    cout << sum << endl;