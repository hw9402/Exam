[back](../6.%20%ED%81%90.md)
# 원형 큐
선형 큐의 문제점 : 큐의 앞 부분이 비더라도 자료를 추가 할수 없음. (메모리 낭비)
- > 원형큐를 이용하여 해결할 수 있음

# 원형큐의 특징 
- 기본 큐의 처음과 끝을 논리적으로 연결하여 오버플로 발생 보완
- 초기상태 : <span style="color:#FF7272">front = rear = 0 (=공백상태)</span>, 최대 큐사이즈 n
- 자료 입력시 : rear값에 (rear +1) % n 을 더한다.
- 자료 삭제 : front 값에 (front+1) % n 을 더한다.
- 원형큐의 문제 : full 상태와 empty 상태일 때 front와 rear 값이 같음
    - 이를 해결하기 위해 front와 rear 사이에 하나의 공백을 둠
- 원형큐의 포화상태: <span style="color:#FF7272">( rear +1 )% n == front</span> 이면 포화상태
- 원형큐의 공백상태: <span style="color:#FF7272">front == rear</span> 이면 공백상태

## 큐의 종류
<img src="https://grm-project-template-bucket.s3.ap-northeast-2.amazonaws.com/lesson/les_LSejo_1664418629927/7c3d4ae14775de3098ff141940a9ea56894718a7a59901a99d5a71bd96568290.png">
<img src="https://grm-project-template-bucket.s3.ap-northeast-2.amazonaws.com/lesson/les_LSejo_1664418629927/15891b921b824d176c1c5d1886b3889488f9488709a0fe95db5a4c77598d2383.png">