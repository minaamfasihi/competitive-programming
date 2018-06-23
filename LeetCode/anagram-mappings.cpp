vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        multimap<int, int> mappings;
        vector<int> result;
        for (int i = 0; i < B.size(); i++) {
            mappings.insert(make_pair(B[i], i));
        }

        for (int i = 0; i < A.size(); i++) {
            int val = mappings.find(A[i])->second;
            result.push_back(val);
        }
        return result;
    }
