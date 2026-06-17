

#include "movie.h"

int main() {
    movie myMovie;

    // 呼叫寫入功能（建立電影資訊）
    myMovie.write();

    // 呼叫讀取功能（顯示並查詢電影資訊）
    myMovie.read();

    return 0;
}