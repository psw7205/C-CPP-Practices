# flask 모듈 임포트
from flask import Flask, render_template, request

# flask 객체 생성
app = Flask(__name__)

# 라우터 등록 => 웹상 루트 주소 생성
@app.route('/')
def ifElse():
    # 변수 생성
    userName = '지니'
    userAge = 5
    # 변수 생성
    myNum = 123
    return render_template('ifElse.html', userName=userName, userAge=userAge, myNum=myNum)


# 앱 실행  --> 마지막 위치 유지
# 웹주소와 포트 지정
app.run(host='127.0.0.1', port=5000, debug=True)
