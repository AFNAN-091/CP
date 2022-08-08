package com.example.demo.controllers;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.stereotype.Service;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.ResponseBody;

import com.example.demo.dao.userdatarepo;
import com.example.demo.model.user;

@Controller
@Service
public class WebController {

	@Autowired
	userdatarepo repo;

	@RequestMapping({ "/home", "/", "/index" })
	public String getHomePage() {
		return "/index.html";
	}

	@RequestMapping("/login")
	public String getLoginPage() {
		return "/login.html";
	}

	@GetMapping("/data")
	public @ResponseBody String getinput(@RequestParam String name,
			@RequestParam String roll, @RequestParam String reg, @RequestParam String pass) {
		user n = new user();
		System.out.print("yes");
		n.setName(name);
		n.setRoll(roll);
		n.setReg(reg);
		n.setPass(pass);
		repo.save(n);

		return "Success!";
	}

	@RequestMapping("/footer")
	public String getFooterPage() {
		return "/footer.html";
	}

	@RequestMapping("/dashboard")
	public String getDashBoardPage() {
		return "/dashboard.html";
	}

	@RequestMapping("/landing")
	public String getLandingPage() {
		return "/landing.html";
	}

	@RequestMapping("/profile")
	public String getProfilePage() {
		return "/profile.html";
	}

	@RequestMapping("/register")
	public String getRegisterPage() {
		return "/register.html";
	}

	@RequestMapping("/error")
	@ResponseBody
	public String getErrorPath() {
		return "<center><h1>Something went wrong</h1></center>";
	}

}
