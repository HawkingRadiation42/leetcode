class SnapshotArray {
public:
    vector<map<int,int>> a;
    int s_id = 0;

    SnapshotArray(int length) {
        a.resize(length);
        for(int i = 0; i < length; i++)
            a[i][0] = 0;
        
    }
    void set(int index, int val) {
        a[index][s_id] = val; // updates them in accordance to the current snap_id
    }
    int snap() {
        s_id++;
        return  s_id - 1;
    }
    int get(int index, int snap_id) {
        // if the given snapshot ID exists in the map for the specified index. If not, it finds and returns the value associated with the nearest previous snapshot ID.
        if(a[index].find(snap_id) == a[index].end())
        {
            auto it = --a[index].lower_bound(snap_id);
            return it->second;
        }
        return a[index][snap_id];
    }

};
