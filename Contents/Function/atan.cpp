// 正方形判斷點模板 分別為左下 左上 右上 右下
typedef Edge Vector;
Vector orig;
bool angleCmp(Edge &a, Edge &b){
    double t1 = atan2(1.0 * a.x - orig.x, 1.0 * a.y - orig.y);
    double t2 = atan2(1.0 * b.x - orig.x, 1.0 * b.y - orig.y);
    return t1 < t2;
}

int main(){
    for(int i = 0; i < 4; i++){
        cin >> edge[i].x >> edge[i].y;
    }
    sort(edge, edge + 4, angleCmp);
}