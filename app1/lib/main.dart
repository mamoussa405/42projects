import 'dart:ui';

import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(
    home: Home(),
  ));
}

class Home extends StatefulWidget {
  @override
  _HomeState createState() => _HomeState();
}

class _HomeState extends State<Home> {
  int ninjaleve = 0;
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      floatingActionButton: FloatingActionButton(
        onPressed: () {
          setState(() {
            ninjaleve++;
          });
        },
        child: Icon(Icons.add),
      ),
      appBar: AppBar(
        title: Text('Ninja ID Card'),
        centerTitle: true,
        backgroundColor: Colors.grey[850],
        elevation: 0.0,
      ),
      body: Container(
        decoration: BoxDecoration(
          image: DecorationImage(
            image: ExactAssetImage("images/konoha.jpg"),
            fit: BoxFit.cover,
          ),
        ),
        child: ClipRRect(
          // make sure we apply clip it properly
          child: BackdropFilter(
            filter: ImageFilter.blur(sigmaX: 3, sigmaY: 3),
            child: Container(
              color: Colors.grey.withOpacity(0.1),
              child: Container(
                margin: EdgeInsets.fromLTRB(0, 50, 0, 0),
                child: Column(
                  children: [
                    Center(
                      child: CircleAvatar(
                        backgroundImage: AssetImage('images/itachi.jpeg'),
                        radius: 70.0,
                      ),
                    ),
                    Divider(
                      height: 50.0,
                      thickness: 1,
                    ),
                    Container(
                      child: Column(
                        children: [
                          Text(
                            'NAME',
                            style: TextStyle(
                                color: Colors.purple[600],
                                letterSpacing: 2.0,
                                fontSize: 20.0,
                                fontWeight: FontWeight.bold),
                          ),
                          Text(
                            'Itachi Uchiha',
                            style: TextStyle(
                                color: Colors.black,
                                letterSpacing: 2.0,
                                fontSize: 16.0,
                                fontWeight: FontWeight.bold),
                          ),
                          Container(
                            margin: EdgeInsets.fromLTRB(0, 20, 0, 20),
                            child: Column(
                              children: [
                                Text(
                                  'Ninja Level',
                                  style: TextStyle(
                                      color: Colors.purple[600],
                                      letterSpacing: 2.0,
                                      fontSize: 20.0,
                                      fontWeight: FontWeight.bold),
                                ),
                                Text(
                                  '$ninjaleve',
                                  style: TextStyle(
                                      color: Colors.black,
                                      letterSpacing: 2.0,
                                      fontSize: 16.0,
                                      fontWeight: FontWeight.bold),
                                ),
                              ],
                            ),
                          ),
                          Row(
                            mainAxisAlignment: MainAxisAlignment.center,
                            children: [
                              Icon(
                                Icons.email,
                                color: Colors.purple[600],
                              ),
                              SizedBox(width: 10.0),
                              Text(
                                'uchiha@konaha.jp',
                                style: TextStyle(color: Colors.purple[600]),
                              )
                            ],
                          ),
                        ],
                      ),
                    ),
                  ],
                ),
              ),
            ),
          ),
        ),
      ),
    );
  }
}
