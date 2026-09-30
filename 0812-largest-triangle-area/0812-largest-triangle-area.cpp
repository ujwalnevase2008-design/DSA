class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        int a = points.size();
        double max_area = 0;
        for(int i = 0;i<a-2;i++){
            for (int j = i+1;j<a-1;j++){
                for (int k = i+2;k<a;k++){
                    double side1=sqrt((points[i][0]-points[j][0])*(points[i][0]-points[j][0])+(points[i][1]-points[j][1])*(points[i][1]-points[j][1]));
                    double side2=sqrt((points[k][0]-points[j][0])*(points[k][0]-points[j][0])+(points[k][1]-points[j][1])*(points[k][1]-points[j][1]));
                    double side3=sqrt((points[i][0]-points[k][0])*(points[i][0]-points[k][0])+(points[i][1]-points[k][1])*(points[i][1]-points[k][1]));
                    double s = (side1 + side2 + side3)/2;
                    double area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
                    if (area > max_area){
                        max_area = area;
                    }
                }
            }
        }
        return max_area;
    }
};