package dots.adrianhsu.bioexp;

import android.content.Intent;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.widget.Button;


public class MainActivity extends AppCompatActivity {

    Button btlistBtn;
    Button ledTurnOnBtn;
    Button disconBtn;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        btlistBtn = (Button) findViewById(R.id.btlistBtn);
        ledTurnOnBtn = (Button) findViewById(R.id.ledTurnOnBtn);
        disconBtn = (Button) findViewById(R.id.disconBtn);
        btlistBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent;
                intent = new Intent(getApplicationContext(), BtlistActivity.class);
                startActivity(intent);
            }
        });

    }

}
