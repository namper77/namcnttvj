package com.example.appqr.Activity;

import androidx.appcompat.app.AppCompatActivity;
import androidx.lifecycle.ViewModelProvider;
import androidx.recyclerview.widget.GridLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import android.os.Bundle;

import com.example.appqr.R;
import com.example.appqr.adapters.SkAdapter;
import com.example.appqr.viewModels.EventViewModel;

public class EventActivity extends AppCompatActivity {

   
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_event);

        rcCategory = findViewById(R.id.rc_category);
        initView();
        initData();
    }
private void initData() {
        int idcate = getIntent().getIntExtra("idcate", 1);
        viewModel = new ViewModelProvider(this).get(EventViewModel.class);
        viewModel.skModelsMutableLiveData(idcate).observe(this, skModels -> {
   
    private void initData() {
        int idcate = getIntent().getIntExtra("idcate", 1);
        viewModel = new ViewModelProvider(this).get(EventViewModel.class);
        viewModel.skModelsMutableLiveData(idcate).observe(this, skModels -> {
            
            }
        });
    }
}
