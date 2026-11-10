
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {

        for (int i = 0; i < paths.size(); i++) {

            string destination = paths[i][1];

            bool found = false;

            for (int j = 0; j < paths.size(); j++) {

                if (destination == paths[j][0]) {
                    found = true;
                    break;
                }
            }

            if (found == false) {
                return destination;
            }
        }

        return "";
    }
};
