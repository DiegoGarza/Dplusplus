#ifndef QUADRUPLE_CPP
#define QUADRUPLE_CPP

Quadruple::Quadruple(int oper, int operand1, int operand2, int resut) {
    this->oper = oper;
    this->operand1 = operand1;
    this->operand2 = operand2;
    this->result = result;
}

void Quadruple::display() {
    cout<<oper<<" "<<operand1<<" "<<operand2<<" "<<result<<endl;
}

#endif