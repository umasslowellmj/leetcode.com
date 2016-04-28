package com.example.munkh.dbproject_androidapp;

import java.io.BufferedReader;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import android.app.Activity;
import android.app.ProgressDialog;
import android.content.Context;
import android.content.Intent;
import android.os.AsyncTask;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends Activity {
    public Button send;
    private ProgressDialog progress;
    public String sid;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        send = (Button) findViewById(R.id.send_post);
        send.setOnClickListener(new View.OnClickListener() {

            public void onClick(View v) {
                EditText input = (EditText) findViewById(R.id.sid_input);
                String num = input.getText().toString();
                Intent intent = new Intent(v.getContext(), Display_info.class);
                Bundle b = new Bundle();
                b.putString("sid", num); //Student id
                intent.putExtras(b); //Pass it to Display_info class as extra argument
                startActivity(intent);// for calling the activity
            }
        });

    }
}