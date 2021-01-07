class ThroneInheritance {
public:
    unordered_map<string, vector<string>> parentChild;
    unordered_map<string, bool> alive;
    ThroneInheritance(string kingName) {
        alive[kingName] = true;
    }
    
    void birth(string parentName, string childName) {
        parentChild[parentName].push_back(childName);
        alive[childName] = true;
    }
    
    void death(string name) {
        alive[name] = false;
    }
    
    vector<string> getInheritanceOrder() {
        vector<string> ord;
        stack<string> nodes;
        nodes.push("king");
        while (!nodes.empty()) {
            string top = nodes.top();
            nodes.pop();
            if (alive[top])
                ord.push_back(top);
            vector<string> children = parentChild[top];
            reverse(children.begin(), children.end());
            for (string child : children)
                nodes.push(child);
        }
        return ord;
    }
};
