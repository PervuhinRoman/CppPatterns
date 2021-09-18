package com.example.sum_a_b;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    EditText s1, s2;
    TextView tv;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        s1 = findViewById(R.id.editTextTextPersonName);
        s2 = findViewById(R.id.editTextTextPersonName2);
        tv = findViewById(R.id.textView2);
    }

    public void onClick(View v) {
        String ss1, ss2;
        double a, b, c;
        ss1 = s1.getText().toString();
        ss2 = s2.getText().toString();
        a = Double.parseDouble(ss1);
        b = Double.parseDouble(ss2);
        c = a + b;
        tv.setText(Double.toString(c));
    }
}